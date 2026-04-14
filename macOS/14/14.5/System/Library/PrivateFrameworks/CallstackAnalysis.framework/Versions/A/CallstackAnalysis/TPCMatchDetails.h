@class NSString, NSMutableArray;

@interface TPCMatchDetails : NSObject

@property (nonatomic) unsigned long long signaturesWithCommonAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithAllCommonAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithAllCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithCommonLastContiguousAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithCommonLastContiguous3PFrames;
@property (nonatomic) unsigned long long signaturesWithCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameAndCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithSimilarLast3PRegions;
@property (nonatomic) long long matchStartOffsetFromLast3PFrame;
@property (nonatomic) BOOL validMatchResult;
@property (nonatomic) BOOL isMatch;
@property (nonatomic) BOOL isApproximateMatch;
@property (nonatomic) BOOL shouldSuppress;
@property (copy, nonatomic) NSString *fullMessage;
@property (copy, nonatomic) NSString *additionalDiagnosticText;
@property (copy, nonatomic) NSString *last3PFrame;
@property (retain, nonatomic) NSMutableArray *signatureVersionsWithCommonLast3PFrames;
@property (retain, nonatomic) NSMutableArray *signatureVersionsWithTriggerFrameAndCommonLast3PFrames;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *helpURL;

- (id)init;
- (void).cxx_destruct;

@end
