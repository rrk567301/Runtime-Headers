@class NSData, NSString;

@interface IMWatchBackground : NSObject

@property (retain, nonatomic) NSData *backgroundImageData;
@property (nonatomic) double luminance;
@property (nonatomic) BOOL isHighKey;
@property (retain, nonatomic) NSString *extensionIdentifier;

+ (id)payloadDataFor:(id)a0 luminance:(double)a1 isHighKey:(BOOL)a2 extensionIdentfier:(id)a3;

- (void).cxx_destruct;
- (id)initWithPayloadData:(id)a0;

@end
