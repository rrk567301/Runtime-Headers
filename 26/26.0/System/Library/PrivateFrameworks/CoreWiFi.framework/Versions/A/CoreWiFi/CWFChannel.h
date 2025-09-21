@class NSString;

@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) unsigned int band;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL is6GHz;
@property (readonly, nonatomic) BOOL is6GHzPSC;
@property (readonly, nonatomic) BOOL overlapsWithUWB;
@property (readonly, nonatomic) BOOL isDFS;

+ (id)channelWithNumber:(unsigned long long)a0 band:(unsigned int)a1 width:(int)a2;

- (BOOL)is5GHz;
- (id)externalForm;
- (BOOL)extAbove;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (BOOL)is2GHz;
- (void)encodeWithCoder:(id)a0;
- (BOOL)overlapsWithUWB;
- (int)width;
- (BOOL)is6GHz;
- (id)initWithExternalForm:(id)a0;
- (BOOL)is6GHzPSC;
- (BOOL)isDFS;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
