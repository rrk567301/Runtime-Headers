@class NSString, NSNumber;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *url;
@property (nonatomic) char available;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) char isNetworkOriginated;
@property (nonatomic) char isVoiceMailMWI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParam:(id)a0 available:(char)a1 count:(id)a2 isNetworkOriginated:(char)a3 isVoiceMailMWI:(char)a4;
- (char)isEqualToCTVoicemailInfoType:(id)a0;

@end
