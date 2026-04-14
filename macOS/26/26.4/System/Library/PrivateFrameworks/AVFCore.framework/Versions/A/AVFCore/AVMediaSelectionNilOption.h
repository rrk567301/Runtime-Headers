@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}

- (BOOL)isPlayable;
- (id)group;
- (id)_groupMediaType;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)description;
- (id)dictionary;
- (void)dealloc;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
