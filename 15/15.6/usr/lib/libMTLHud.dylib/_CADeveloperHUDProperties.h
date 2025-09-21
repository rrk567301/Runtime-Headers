@class NSMutableDictionary, NSMutableArray;

@interface _CADeveloperHUDProperties : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableArray *rows;
@property (nonatomic) unsigned long long frameNumber;
@property (nonatomic) char enabled;
@property (nonatomic) char loggingEnabled;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned int layout;

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (id)elements;
- (char)addLabel:(id)a0 after:(id)a1;
- (void)updateLabel:(id)a0 value:(id)a1;
- (const char *)UTF8StringForName:(id)a0;
- (char)addGraph:(id)a0 after:(id)a1 min:(double)a2 max:(double)a3;
- (char)addStatistic:(id)a0 after:(id)a1 color:(unsigned int)a2 tolerance:(double)a3 graph:(id)a4;
- (double)incrementStatistic:(id)a0 value:(double)a1;
- (void)setStatistic:(id)a0 value:(double)a1;

@end
