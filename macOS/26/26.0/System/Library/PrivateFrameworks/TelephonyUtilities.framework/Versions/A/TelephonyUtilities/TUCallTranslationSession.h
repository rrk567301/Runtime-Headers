@class NSUUID, NSString, NSLocale;

@interface TUCallTranslationSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int translationState;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSString *callUUID;
@property (retain, nonatomic) NSLocale *localLocale;
@property (retain, nonatomic) NSLocale *remoteLocale;
@property (nonatomic) int translationLinks;
@property (retain, nonatomic) NSUUID *uplinkTranslatorIdentifier;
@property (retain, nonatomic) NSUUID *downlinkTranslatorIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 requestUUID:(id)a1 state:(int)a2 callUUID:(id)a3 localLocale:(id)a4 remoteLocale:(id)a5 translationLinks:(int)a6 uplinkTranslatorIdentifier:(id)a7 downlinkTranslatorIdentifier:(id)a8;
- (BOOL)isEqualToTranslationSession:(id)a0;

@end
