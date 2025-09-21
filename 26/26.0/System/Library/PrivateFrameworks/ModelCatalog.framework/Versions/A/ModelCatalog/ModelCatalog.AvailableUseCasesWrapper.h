@class NSString;

@interface ModelCatalog.AvailableUseCasesWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ rawAvailableUseCases;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
