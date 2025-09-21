@class NSString;

@interface VideoHUDAudioMenuItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long tag;
@property (nonatomic) void *refCon;
@property (nonatomic) char isChecked;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 tag:(long long)a1;
- (id)initWithTitle:(id)a0 tag:(long long)a1 refCon:(void *)a2 isChecked:(char)a3;

@end
