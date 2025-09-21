@class NSString, NSData;

@interface TVRCTimedMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *rawData;
@property (nonatomic) char hasExpectsTimedMetadata;
@property (nonatomic) char expectsTimedMetadata;

+ (id)_timedMetadataWithIdentifier:(id)a0 rawData:(id)a1 expectsTimedMetadata:(id)a2;
+ (id)timedMetadataWithIdentifier:(id)a0 rawData:(id)a1;
+ (id)timedMetadataWithIdentifier:(id)a0 rawData:(id)a1 expectsTimedMetadata:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 rawData:(id)a1 expectsTimedMetadata:(id)a2;
- (char)isEqualToTimedMetadata:(id)a0;

@end
