@class NSString;

@interface RWIProtocolDOMVideoColorSpace : RWIProtocolJSONObject

@property (nonatomic) char fullRange;
@property (copy, nonatomic) NSString *matrix;
@property (copy, nonatomic) NSString *primaries;
@property (copy, nonatomic) NSString *transfer;

@end
