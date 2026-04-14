@class NSString;

@interface UPDetectedData : NSObject

@property (readonly, copy) NSString *label;
@property (readonly) struct __CFArray { } *dataDetectorResult;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLabel:(id)a0 dataDetectorResult:(struct __CFArray { } *)a1;

@end
