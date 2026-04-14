@class NSString;

@interface AVFunctionBarMediaSelectionOption : NSObject

@property (readonly) NSString *title;
@property (retain) id representedObject;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
