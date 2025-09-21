@class NSString;

@interface NSHelpAttachment : NSTextAttachment {
    NSString *markerName;
    NSString *fileName;
}

- (id)fileName;
- (void)dealloc;
- (id)initWithFileName:(id)a0 markerName:(id)a1;
- (id)markerName;

@end
