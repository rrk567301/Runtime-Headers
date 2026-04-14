@class NSEvent;

@interface _NSTableViewDelayProxy : NSObject {
    long long column;
    NSEvent *event;
    long long row;
}

+ (id)proxy;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
