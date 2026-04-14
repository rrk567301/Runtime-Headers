@class NSMutableArray;

@interface UMLogMessage : NSObject {
    NSMutableArray *_publicStrings;
    NSMutableArray *_privateStrings;
}

- (void).cxx_destruct;
- (id)init;

@end
