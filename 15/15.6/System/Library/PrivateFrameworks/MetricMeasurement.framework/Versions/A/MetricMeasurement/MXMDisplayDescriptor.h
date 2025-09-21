@class CADisplay, NSString;

@interface MXMDisplayDescriptor : NSObject

@property (readonly, nonatomic) unsigned int _cgDisplayId;
@property (readonly, nonatomic) CADisplay *display;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) char main;
@property (readonly, nonatomic, getter=main) char isMain;

- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0;

@end
