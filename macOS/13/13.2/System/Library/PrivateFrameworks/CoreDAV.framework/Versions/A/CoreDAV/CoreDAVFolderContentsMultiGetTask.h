@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 appSpecificDataItemClass:(Class)a2;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;

@end
