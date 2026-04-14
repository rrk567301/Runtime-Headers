@class NSDictionary, NSDate;

@interface SPHistoricalReport : NSObject

@property unsigned int type;
@property (retain) NSDate *timestamp;
@property (retain) NSDictionary *report;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
