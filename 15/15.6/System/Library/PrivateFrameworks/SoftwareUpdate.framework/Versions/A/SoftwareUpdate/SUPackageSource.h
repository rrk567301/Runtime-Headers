@class SUCatalog, NSArray;

@interface SUPackageSource : NSObject <NSSecureCoding, PKPackageSource>

@property (class, readonly) char supportsSecureCoding;

@property char packageSourceIsValid;
@property (retain) SUCatalog *catalog;
@property (readonly) NSArray *allPackageReferences;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)digestForPackageAtURLPath:(id)a0;
- (id)initWithCatalog:(id)a0;
- (char)registerProduct:(id)a0;

@end
