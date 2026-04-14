@class NSString;

@interface AVTouchBarMediaSelectionOption : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id representedObject;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 type:(long long)a1;

@end
