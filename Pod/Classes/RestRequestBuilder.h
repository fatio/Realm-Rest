//
// Created by Tobias Sundstrand on 15-01-29.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger , RestRequestBuilderParameterStyle) {
    RestRequestBuilderParameterStyleURL,
    RestRequestBuilderParameterStyleBodyJSON,
    RestRequestBuilderParameterStyleBodyForm
};

@interface RestRequestBuilder : NSObject

+ (NSURLRequest *)requestWithBaseURL:(NSURL *)baseURL
                                path:(NSString *)path
                              method:(NSString *)method
                          parameters:(NSDictionary *)params
                      parameterStyle:(RestRequestBuilderParameterStyle)paramStyle
                             headers:(NSDictionary *)headers;

@end