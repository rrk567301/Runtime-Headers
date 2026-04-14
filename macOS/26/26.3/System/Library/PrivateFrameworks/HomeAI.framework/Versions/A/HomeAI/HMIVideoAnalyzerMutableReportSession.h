@class NSString, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *source;
@property (readonly) NSMutableArray *fragments;

- (id)initWithSource:(id)a0;
- (id)description;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)appendFragmentResult:(id)a0 redactFrames:(BOOL)a1;

@end
