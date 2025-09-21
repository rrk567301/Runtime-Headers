@class NSUUID, _TtC15UIUnderstanding21ClickabilityDetection, NSArray, _TtC15UIUnderstanding11BoundingBox, NSString, _TtC15UIUnderstanding13IconDetection, _TtC15UIUnderstanding14FocusDetection, _TtC15UIUnderstanding11UIDetection;

@interface UIObjectCompat : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ normalizedSquaredRect;
    void /* unknown type, empty encoding */ groupingInfo;
}

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) _TtC15UIUnderstanding11UIDetection *detection;
@property (nonatomic, retain) _TtC15UIUnderstanding11BoundingBox *boundingBox;
@property (nonatomic, retain) _TtC15UIUnderstanding13IconDetection *iconDetection;
@property (nonatomic, retain) _TtC15UIUnderstanding21ClickabilityDetection *clickDetection;
@property (nonatomic, retain) _TtC15UIUnderstanding14FocusDetection *focusDetection;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDetection:(id)a0 clickable:(id)a1 focused:(id)a2 icon:(id)a3 boundingBox:(id)a4 children:(id)a5;
- (id)initWithLabel:(long long)a0 confidence:(double)a1 text:(id)a2 boundingBox:(id)a3 children:(id)a4 clickable:(BOOL)a5 focused:(BOOL)a6;

@end
