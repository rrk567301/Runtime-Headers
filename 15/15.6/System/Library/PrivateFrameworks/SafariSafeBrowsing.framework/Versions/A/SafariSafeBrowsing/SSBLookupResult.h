@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *serviceLookupResults;
@property (readonly, nonatomic) char URLContainsUserInfo;
@property (readonly, nonatomic, getter=isPhishing) char phishing;
@property (readonly, nonatomic, getter=isMalware) char malware;
@property (readonly, nonatomic, getter=isUnwantedSoftware) char unwantedSoftware;
@property (readonly, nonatomic, getter=isKnownToBeUnsafe) char knownToBeUnsafe;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithServiceLookUpResults:(id)a0;
- (id)_initWithServiceLookUpResults:(id)a0 URLContainsUserInfo:(char)a1;

@end
