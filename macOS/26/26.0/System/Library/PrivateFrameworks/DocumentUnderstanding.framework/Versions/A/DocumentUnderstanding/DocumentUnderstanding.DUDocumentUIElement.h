@class NSString, NSArray;

@interface DocumentUnderstanding.DUDocumentUIElement : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ text;
    void /* function */ version;
    void /* function */ classDescriptor;
    void /* function */ superviewClassNames;
    void /* function */ superviewClassIndices;
    void /* function */ range;
    void /* function */ styleProperties;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *classDescriptor;
@property (nonatomic) float fontSize;
@property (nonatomic, copy) NSArray *superviewClassNames;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInWindow;
@property (nonatomic) struct CGPoint { double x0; double x1; } absoluteOriginOnScreen;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL isValidForContentExtraction;
@property (nonatomic, copy) NSArray *superviewClassIndices;
@property (nonatomic, copy) NSArray *range;
@property (nonatomic, copy) NSArray *styleProperties;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
