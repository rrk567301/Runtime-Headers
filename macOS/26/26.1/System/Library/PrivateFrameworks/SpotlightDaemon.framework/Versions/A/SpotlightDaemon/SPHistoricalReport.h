@class NSDictionary, NSDate;

@interface SPHistoricalReport : NSObject

@property unsigned int type;
@property (retain) NSDate *timestamp;
@property (retain) NSDictionary *report;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
