@class NSStatusItem;

@interface NSStatusItemReplicant : NSStatusItem

@property (weak) NSStatusItem *parentItem;

- (void).cxx_destruct;
- (char)_isHidden;
- (void)_adjustLength;
- (void)_autosavePosition;
- (id)_defaultsKeyForAutosaveProperty:(id)a0;
- (id)_initWithStatusBar:(id)a0 parent:(id)a1;
- (void)_initializeAutosaveName;
- (char)_shouldReplicate;
- (unsigned int)_statusItemFlags;
- (void)_updateItemForMetrics:(id)a0;
- (char)isVisible;
- (id)replicantView;
- (void)setDrawBlock:(id /* block */)a0;
- (void)setShadowDrawBlock:(id /* block */)a0;

@end
