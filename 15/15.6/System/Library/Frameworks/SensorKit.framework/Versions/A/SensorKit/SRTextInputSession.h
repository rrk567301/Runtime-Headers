@class NSString;

@interface SRTextInputSession : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property double duration;
@property long long sessionType;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textInputSessionWithDuration:(double)a0 sessionType:(long long)a1 sessionIdentifier:(id)a2;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
