@class NSArray;

@interface GTReplayQueryRasterMapReply : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct GTSize { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalGranularity;
@property (retain, nonatomic) NSArray *layers;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
