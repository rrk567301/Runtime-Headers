@class NSString, NSDate;

@interface PLChangesRequestInProgressMarker : NSObject {
    int _counterValue;
    NSString *_identifier;
    NSDate *_date;
    unsigned long long _threadId;
}

- (void)stillAlive;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
