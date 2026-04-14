@class NSString;

@interface AVTouchBarMediaSelectionOption : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id representedObject;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTitle:(id)a0 type:(long long)a1;

@end
