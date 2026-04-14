@class NSString, CHMutableTokenizedTextResult, CHDrawing;

@interface CHResultWithContext : NSObject {
    int _contentType;
    NSString *_leftContext;
    CHMutableTokenizedTextResult *_result;
}

@property (readonly, nonatomic) NSString *leftContext;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) CHMutableTokenizedTextResult *result;
@property (readonly, nonatomic) CHDrawing *drawing;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 leftContext:(id)a1 contentType:(int)a2;
- (id)initWithResult:(id)a0 leftContext:(id)a1 contentType:(int)a2 drawing:(id)a3;

@end
