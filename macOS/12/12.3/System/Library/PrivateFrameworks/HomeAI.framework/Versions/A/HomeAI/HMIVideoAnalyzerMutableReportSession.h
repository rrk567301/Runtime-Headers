@class NSString, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *source;
@property (readonly) NSMutableArray *fragments;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (id)attributeDescriptions;
- (void)appendFragmentResult:(id)a0 redactFrames:(BOOL)a1;

@end
