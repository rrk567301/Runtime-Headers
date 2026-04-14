@class NSString, NSDate;

@interface PLChangesRequestInProgressMarker : NSObject {
    int _counterValue;
    NSString *_identifier;
    NSDate *_date;
    unsigned long long _threadId;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)stillAlive;
- (id)description;
- (void).cxx_destruct;

@end
