@class NSString;

@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) unsigned int band;
@property (readonly, nonatomic) char is2GHz;
@property (readonly, nonatomic) char is5GHz;
@property (readonly, nonatomic) char is6GHz;
@property (readonly, nonatomic) char is6GHzPSC;
@property (readonly, nonatomic) char isDFS;

+ (id)channelWithNumber:(unsigned long long)a0 band:(unsigned int)a1 width:(int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)width;
- (char)isEqualToChannel:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (char)extAbove;
- (char)is2GHz;
- (char)is5GHz;
- (char)is6GHz;
- (char)is6GHzPSC;
- (char)isDFS;

@end
