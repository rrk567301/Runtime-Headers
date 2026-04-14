@class NSString, NSNumber;

@interface ICASFindInTranscriptData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *wasSearchQueryEntered;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithWasSearchQueryEntered:(id)a0;

@end
