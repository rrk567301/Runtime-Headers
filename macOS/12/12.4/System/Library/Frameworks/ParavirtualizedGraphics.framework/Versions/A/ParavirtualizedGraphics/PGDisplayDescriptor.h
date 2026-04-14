@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PGDisplayDescriptor : NSObject {
    id /* block */ _cursorGlyphHandler2;
    id /* block */ _sleepHandler;
    id /* block */ _modeListResponsivenessChangeHandler;
}

@property (copy, nonatomic) id /* block */ cursorGlyphHandler2;
@property (copy, nonatomic) id /* block */ sleepHandler;
@property (copy, nonatomic) id /* block */ modeListResponsivenessChangeHandler;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } sizeInMillimeters;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ modeChangeHandler;
@property (copy, nonatomic) id /* block */ newFrameEventHandler;
@property (copy, nonatomic) id /* block */ cursorGlyphHandler;
@property (copy, nonatomic) id /* block */ cursorShowHandler;
@property (copy, nonatomic) id /* block */ cursorMoveHandler;

- (void)dealloc;
- (id)init;

@end
