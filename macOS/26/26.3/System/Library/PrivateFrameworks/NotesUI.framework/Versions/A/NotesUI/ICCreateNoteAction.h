@class ICUnifiedNoteContext;

@interface ICCreateNoteAction : NSObject

@property (readonly, nonatomic) ICUnifiedNoteContext *noteContext;
@property (nonatomic) BOOL allowsNoContent;

- (void).cxx_destruct;
- (id)initWithNoteContext:(id)a0;
- (id)performWithTitle:(id)a0 contents:(id)a1 pinned:(BOOL)a2 container:(id)a3 error:(id *)a4;

@end
