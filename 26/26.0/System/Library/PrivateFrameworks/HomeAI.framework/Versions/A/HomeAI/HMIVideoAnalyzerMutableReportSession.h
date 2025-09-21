@class NSString, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *source;
@property (readonly) NSMutableArray *fragments;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)appendFragmentResult:(id)a0 redactFrames:(BOOL)a1;

@end
