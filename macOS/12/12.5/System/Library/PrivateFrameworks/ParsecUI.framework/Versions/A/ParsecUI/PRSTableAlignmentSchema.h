@class NSArray;

@interface PRSTableAlignmentSchema : NSObject

@property (retain, nonatomic) NSArray *internalAlignments;
@property (retain, nonatomic) NSArray *externalAlignments;
@property (retain, nonatomic) NSArray *columnsWithEqualWidths;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDecodedColumnAlignments:(id)a0 dataAlignments:(id)a1 columnEqualWidths:(id)a2;
- (id)initWithInternalAlignmentArray:(id)a0 externalAlignmentsArray:(id)a1 columnWithEqualWidths:(id)a2;

@end
