@class NSDate;

@interface PHImportTimer : NSObject

@property (retain) id uuid;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property unsigned char type;
@property unsigned char subtype;
@property unsigned long long signpostId;

- (double)duration;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (id)initWithType:(unsigned char)a0 subtype:(unsigned char)a1;

@end
