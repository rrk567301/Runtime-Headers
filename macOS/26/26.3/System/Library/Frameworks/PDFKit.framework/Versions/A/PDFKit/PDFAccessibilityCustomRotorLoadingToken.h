@class NSNumber;

@interface PDFAccessibilityCustomRotorLoadingToken : NSObject

@property (retain, nonatomic) NSNumber *hashIdentifier;
@property (retain, nonatomic) NSNumber *page;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHashIdentifier:(id)a0 page:(id)a1;

@end
