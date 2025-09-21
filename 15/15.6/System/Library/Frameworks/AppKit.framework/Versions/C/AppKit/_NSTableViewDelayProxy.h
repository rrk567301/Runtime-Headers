@class NSEvent;

@interface _NSTableViewDelayProxy : NSObject {
    long long column;
    NSEvent *event;
    long long row;
}

+ (id)proxy;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
