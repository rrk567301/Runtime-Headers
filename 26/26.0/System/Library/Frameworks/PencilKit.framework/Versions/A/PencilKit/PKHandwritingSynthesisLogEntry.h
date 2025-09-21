@class NSMutableDictionary, NSDictionary, NSArray, NSLocale;

@interface PKHandwritingSynthesisLogEntry : NSObject

@property (readonly) NSMutableDictionary *debugInfo;
@property (readonly) NSLocale *locale;
@property (readonly) double duration;
@property (readonly) NSDictionary *description;
@property (readonly) NSArray *synthesizedStrokes;
@property (readonly) NSArray *originalStrokes;
@property (readonly) NSArray *contextStrokes;

- (void).cxx_destruct;
- (id)initWithDebugInfo:(id)a0;
- (id)initWithLocale:(id)a0 duration:(double)a1 debugInfo:(id)a2;

@end
