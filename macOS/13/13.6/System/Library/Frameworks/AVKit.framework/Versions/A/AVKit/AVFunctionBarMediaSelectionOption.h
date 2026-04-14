@class NSString;

@interface AVFunctionBarMediaSelectionOption : NSObject

@property (readonly) NSString *title;
@property (retain) id representedObject;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
