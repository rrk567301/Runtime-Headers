@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)group;
- (id)_groupMediaType;
- (id)dictionary;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlayable;
- (id)description;
- (id)_groupID;
- (void)dealloc;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
