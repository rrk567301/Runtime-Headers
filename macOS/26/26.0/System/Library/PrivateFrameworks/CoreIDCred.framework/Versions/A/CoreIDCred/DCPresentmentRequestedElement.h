@class NSString;

@interface DCPresentmentRequestedElement : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) unsigned long long intentToRetain;
@property (nonatomic, readonly) long long retentionPeriod;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithElementIdentifier:(id)a0 intentToRetain:(unsigned long long)a1 retentionPeriod:(long long)a2;

@end
