@class NSUUID;

@interface NSWritingToolsSelection : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectionRange;
@property (readonly, nonatomic) NSUUID *selectionContextID;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSUUID *contextIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contextIdentifier:(id)a1;
- (id)initWithSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 selectionContextID:(id)a1;

@end
