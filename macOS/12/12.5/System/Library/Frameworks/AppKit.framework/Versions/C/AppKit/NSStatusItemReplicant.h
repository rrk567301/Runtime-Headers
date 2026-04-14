@class NSStatusItem;

@interface NSStatusItemReplicant : NSStatusItem

@property (weak) NSStatusItem *parentItem;

- (BOOL)_isHidden;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)_updateItemForMetrics:(id)a0;
- (void)_autosavePosition;
- (unsigned int)_statusItemFlags;
- (void)setDrawBlock:(id /* block */)a0;
- (void)setShadowDrawBlock:(id /* block */)a0;
- (id)replicantView;
- (id)_initWithStatusBar:(id)a0 parent:(id)a1;
- (id)_defaultsKeyForAutosaveProperty:(id)a0;
- (BOOL)_shouldReplicate;
- (void)_adjustLength;
- (void)_initializeAutosaveName;

@end
