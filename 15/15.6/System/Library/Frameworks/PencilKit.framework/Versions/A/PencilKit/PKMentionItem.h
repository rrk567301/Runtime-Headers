@class NSString, NSUUID;

@interface PKMentionItem : PKDetectionItem

@property (readonly, nonatomic) NSString *mentionResult;
@property (readonly, nonatomic) NSUUID *mentionUUID;
@property (readonly, nonatomic) char active;

+ (id)mentionItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)setActive:(char)a0;
- (id)strokeColor;
- (id)_actionNameForActivation:(char)a0;
- (id)_baselinePath;
- (void)clearActiveInDrawing:(id)a0;
- (void)invalidateUUID;

@end
