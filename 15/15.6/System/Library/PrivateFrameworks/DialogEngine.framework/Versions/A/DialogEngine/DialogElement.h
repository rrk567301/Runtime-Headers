@class NSString;

@interface DialogElement : NSObject

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *fullPrint;
@property (retain, nonatomic) NSString *fullSpeak;
@property (retain, nonatomic) NSString *supportingPrint;
@property (retain, nonatomic) NSString *supportingSpeak;
@property (retain, nonatomic) NSString *unfilteredFullPrint;
@property (retain, nonatomic) NSString *unfilteredFullSpeak;
@property (retain, nonatomic) NSString *unfilteredSupportingPrint;
@property (retain, nonatomic) NSString *unfilteredSupportingSpeak;
@property (retain, nonatomic) NSString *redactedFullPrint;
@property (retain, nonatomic) NSString *redactedFullSpeak;
@property (retain, nonatomic) NSString *redactedSupportingPrint;
@property (retain, nonatomic) NSString *redactedSupportingSpeak;
@property (retain, nonatomic) NSString *unfilteredRedactedFullPrint;
@property (retain, nonatomic) NSString *unfilteredRedactedFullSpeak;
@property (nonatomic) char printOnly;
@property (nonatomic) char spokenOnly;
@property (nonatomic) char spokenOnlyDefined;
@property (nonatomic) char isApprovedForGrading;

- (void).cxx_destruct;

@end
