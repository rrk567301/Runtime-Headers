@interface WFWeatherChannelValidator : NSObject

+ (char)isLeafNodeType:(id)a0;
+ (id)expectedStructure;

- (char)validateDictionary:(id)a0 expectedStructure:(id)a1;
- (char)validateResponseData:(id)a0;

@end
