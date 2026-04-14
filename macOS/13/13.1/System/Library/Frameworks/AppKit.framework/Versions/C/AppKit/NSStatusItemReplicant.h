@class NSStatusItem;

@interface NSStatusItemReplicant : NSStatusItem

@property (weak) NSStatusItem *parentItem;

- (BOOL)_isHidden;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)setDrawBlock:(id /* block */)a0;
- (void)setShadowDrawBlock:(id /* block */)a0;
- (id)_initWithStatusBar:(id)a0 parent:(id)a1;
- (id)_defaultsKeyForAutosaveProperty:(id)a0;
- (void)_autosavePosition;
- (id)replicantView;
- (BOOL)_shouldReplicate;
- (void)_adjustLength;
- (unsigned int)_statusItemFlags;
- (void)_updateItemForMetrics:(id)a0;
- (void)_initializeAutosaveName;

@end
