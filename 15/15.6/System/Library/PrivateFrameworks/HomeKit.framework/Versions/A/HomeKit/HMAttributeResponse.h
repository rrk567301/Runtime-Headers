@class HMAttributeRequest;

@interface HMAttributeResponse : HMResponseBase

@property (readonly, nonatomic) HMAttributeRequest *request;

- (char)isEqual:(id)a0;

@end
