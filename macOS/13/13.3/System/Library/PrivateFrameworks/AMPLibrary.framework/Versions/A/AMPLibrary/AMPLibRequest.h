@class NSArray;

@interface AMPLibRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long libItemKind;
@property (nonatomic) unsigned long long libSectionKind;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (nonatomic) unsigned long long mediaDomains;
@property (nonatomic) unsigned long long mediaKinds;
@property (nonatomic) unsigned long long deviceCapabilities;
@property (copy, nonatomic) NSArray *scopedContainers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithDomains:(unsigned long long)a0 mediaKinds:(unsigned long long)a1 deviceCapabilities:(unsigned long long)a2;

@end
