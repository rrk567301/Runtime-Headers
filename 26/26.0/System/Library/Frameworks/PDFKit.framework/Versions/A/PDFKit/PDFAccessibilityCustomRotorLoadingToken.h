@class NSNumber;

@interface PDFAccessibilityCustomRotorLoadingToken : NSObject

@property (retain, nonatomic) NSNumber *hashIdentifier;
@property (retain, nonatomic) NSNumber *page;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHashIdentifier:(id)a0 page:(id)a1;

@end
