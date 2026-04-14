@class NSArray, NSDictionary, NSSet, CHDrawing;

@interface CHRemoteDocumentLayoutAnalysisRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CHDrawing *drawing;
@property (copy, nonatomic) NSArray *strokeIdentifiers;
@property (copy, nonatomic) NSSet *contextStrokeIdentifiers;
@property (nonatomic) BOOL hasBeenSubmitted;
@property (nonatomic) long long priority;

+ (id)loadFromFile:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0 strokeIdentifiers:(id)a1 contextStrokeIdentifiers:(id)a2 options:(id)a3 priority:(long long)a4;
- (BOOL)isEqualToRemoteDocumentLayoutAnalysisRequest:(id)a0;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
